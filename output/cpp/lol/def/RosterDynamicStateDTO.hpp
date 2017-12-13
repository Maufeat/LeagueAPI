#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BuybackMember.hpp>
#include <lol/def/TicketOfferDTO.hpp>
#include <lol/def/RosterWithdraw.hpp>
#include <lol/def/PhaseRosterSubDTO.hpp>
namespace lol {
  struct RosterDynamicStateDTO { 
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    int64_t rosterId;
    int64_t tournamentId;
    RosterWithdraw withdraw;
    std::vector<BuybackMember> members;
    std::vector<uint64_t> phaseCheckinStates;
    std::vector<TicketOfferDTO> ticketOffers; 
  };
  void to_json(json& j, const RosterDynamicStateDTO& v) {
  j["phaseRosterSubs"] = v.phaseRosterSubs; 
  j["rosterId"] = v.rosterId; 
  j["tournamentId"] = v.tournamentId; 
  j["withdraw"] = v.withdraw; 
  j["members"] = v.members; 
  j["phaseCheckinStates"] = v.phaseCheckinStates; 
  j["ticketOffers"] = v.ticketOffers; 
  }
  void from_json(const json& j, RosterDynamicStateDTO& v) {
  v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
  v.rosterId = j.at("rosterId").get<int64_t>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
  v.members = j.at("members").get<std::vector<BuybackMember>>(); 
  v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>(); 
  v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
  }
}