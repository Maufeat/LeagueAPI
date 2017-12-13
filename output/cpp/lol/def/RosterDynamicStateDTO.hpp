#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PhaseRosterSubDTO.hpp>
#include <lol/def/TicketOfferDTO.hpp>
#include <lol/def/BuybackMember.hpp>
#include <lol/def/RosterWithdraw.hpp>
namespace lol {
  struct RosterDynamicStateDTO { 
    RosterWithdraw withdraw;
    int64_t tournamentId;
    std::vector<uint64_t> phaseCheckinStates;
    int64_t rosterId;
    std::vector<TicketOfferDTO> ticketOffers;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    std::vector<BuybackMember> members; 
  };
  void to_json(json& j, const RosterDynamicStateDTO& v) {
  j["withdraw"] = v.withdraw; 
  j["tournamentId"] = v.tournamentId; 
  j["phaseCheckinStates"] = v.phaseCheckinStates; 
  j["rosterId"] = v.rosterId; 
  j["ticketOffers"] = v.ticketOffers; 
  j["phaseRosterSubs"] = v.phaseRosterSubs; 
  j["members"] = v.members; 
  }
  void from_json(const json& j, RosterDynamicStateDTO& v) {
  v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>(); 
  v.rosterId = j.at("rosterId").get<int64_t>(); 
  v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
  v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
  v.members = j.at("members").get<std::vector<BuybackMember>>(); 
  }
}