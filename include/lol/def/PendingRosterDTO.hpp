#pragma once
#include "../base_def.hpp" 
#include "PendingRosterMemberDTO.hpp"
#include "PendingRosterInviteeDTO.hpp"
#include "RewardLogo.hpp"
#include "TicketOfferDTO.hpp"
#include "FailedInvite.hpp"
namespace lol {
  struct PendingRosterDTO { 
    std::string name;
    int64_t tournamentId;
    std::vector<RewardLogo> rewardLogos;
    std::vector<FailedInvite> inviteFaileds;
    std::vector<PendingRosterInviteeDTO> invitees;
    int32_t tier;
    std::vector<PendingRosterMemberDTO> members;
    std::vector<TicketOfferDTO> ticketOffers;
    int32_t logo;
    std::string invitationId;
    uint64_t captainId;
    std::string shortName;
    int32_t logoColor; 
  };
  inline void to_json(json& j, const PendingRosterDTO& v) {
    j["name"] = v.name; 
    j["tournamentId"] = v.tournamentId; 
    j["rewardLogos"] = v.rewardLogos; 
    j["inviteFaileds"] = v.inviteFaileds; 
    j["invitees"] = v.invitees; 
    j["tier"] = v.tier; 
    j["members"] = v.members; 
    j["ticketOffers"] = v.ticketOffers; 
    j["logo"] = v.logo; 
    j["invitationId"] = v.invitationId; 
    j["captainId"] = v.captainId; 
    j["shortName"] = v.shortName; 
    j["logoColor"] = v.logoColor; 
  }
  inline void from_json(const json& j, PendingRosterDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rewardLogos = j.at("rewardLogos").get<std::vector<RewardLogo>>(); 
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>(); 
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
  }
}