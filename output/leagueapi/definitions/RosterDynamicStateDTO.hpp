#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/TicketOfferDTO.hpp>"
#include "<leagueapi/definitions/RosterWithdraw.hpp>"
#include "<leagueapi/definitions/PhaseRosterSubDTO.hpp>"
#include "<leagueapi/definitions/BuybackMember.hpp>"

namespace leagueapi {
  struct RosterDynamicStateDTO { /**/ 
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;/**/
    int64_t rosterId;/**/
    int64_t tournamentId;/**/
    RosterWithdraw withdraw;/**/
    std::vector<BuybackMember> members;/**/
    std::vector<uint64_t> phaseCheckinStates;/**/
    std::vector<TicketOfferDTO> ticketOffers;/**/
  };
  static void to_json(json& j, const RosterDynamicStateDTO& v) { 
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["withdraw"] = v.withdraw;
    j["members"] = v.members;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
    j["ticketOffers"] = v.ticketOffers;
  }
  static void from_json(const json& j, RosterDynamicStateDTO& v) { 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.members = j.at("members").get<std::vector<BuybackMember>>(); 
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
  }
} 