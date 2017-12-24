#pragma once
#include "../base_def.hpp" 
#include "BuybackMember.hpp"
#include "PhaseRosterSubDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "RosterWithdraw.hpp"
namespace lol {
  struct RosterDynamicStateDTO { 
    std::vector<uint64_t> phaseCheckinStates;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    int64_t rosterId;
    int64_t tournamentId;
    RosterWithdraw withdraw;
    std::vector<TicketOfferDTO> ticketOffers;
    std::vector<BuybackMember> members; 
  };
  inline void to_json(json& j, const RosterDynamicStateDTO& v) {
    j["phaseCheckinStates"] = v.phaseCheckinStates; 
    j["phaseRosterSubs"] = v.phaseRosterSubs; 
    j["rosterId"] = v.rosterId; 
    j["tournamentId"] = v.tournamentId; 
    j["withdraw"] = v.withdraw; 
    j["ticketOffers"] = v.ticketOffers; 
    j["members"] = v.members; 
  }
  inline void from_json(const json& j, RosterDynamicStateDTO& v) {
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>(); 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.members = j.at("members").get<std::vector<BuybackMember>>(); 
  }
}