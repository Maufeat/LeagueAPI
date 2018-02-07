#pragma once
#include "../base_def.hpp" 
#include "PhaseInMember.hpp"
#include "RosterWithdraw.hpp"
#include "PhaseRosterSubDTO.hpp"
#include "TicketOfferDTO.hpp"
namespace lol {
  struct RosterDynamicStateDTO { 
    int32_t version;
    int64_t tournamentId;
    int64_t rosterId;
    std::vector<uint64_t> phaseCheckinStates;
    std::vector<PhaseInMember> members;
    std::vector<TicketOfferDTO> ticketOffers;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    RosterWithdraw withdraw; 
  };
  inline void to_json(json& j, const RosterDynamicStateDTO& v) {
    j["version"] = v.version; 
    j["tournamentId"] = v.tournamentId; 
    j["rosterId"] = v.rosterId; 
    j["phaseCheckinStates"] = v.phaseCheckinStates; 
    j["members"] = v.members; 
    j["ticketOffers"] = v.ticketOffers; 
    j["phaseRosterSubs"] = v.phaseRosterSubs; 
    j["withdraw"] = v.withdraw; 
  }
  inline void from_json(const json& j, RosterDynamicStateDTO& v) {
    v.version = j.at("version").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>(); 
    v.members = j.at("members").get<std::vector<PhaseInMember>>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
  }
}