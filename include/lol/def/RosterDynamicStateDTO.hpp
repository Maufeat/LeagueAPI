#pragma once
#include "../base_def.hpp" 
#include "PhaseRosterSubDTO.hpp"
#include "RosterWithdraw.hpp"
#include "BuybackMember.hpp"
#include "TicketOfferDTO.hpp"
namespace lol {
  struct RosterDynamicStateDTO { 
    int64_t tournamentId;
    RosterWithdraw withdraw;
    std::vector<BuybackMember> members;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    std::vector<TicketOfferDTO> ticketOffers;
    int64_t rosterId;
    std::vector<uint64_t> phaseCheckinStates; 
  };
  inline void to_json(json& j, const RosterDynamicStateDTO& v) {
    j["tournamentId"] = v.tournamentId; 
    j["withdraw"] = v.withdraw; 
    j["members"] = v.members; 
    j["phaseRosterSubs"] = v.phaseRosterSubs; 
    j["ticketOffers"] = v.ticketOffers; 
    j["rosterId"] = v.rosterId; 
    j["phaseCheckinStates"] = v.phaseCheckinStates; 
  }
  inline void from_json(const json& j, RosterDynamicStateDTO& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.members = j.at("members").get<std::vector<BuybackMember>>(); 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>(); 
  }
}