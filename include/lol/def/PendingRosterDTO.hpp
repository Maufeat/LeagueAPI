#pragma once
#include "../base_def.hpp" 
#include "FailedInvite.hpp"
#include "RewardLogo.hpp"
#include "TicketOfferDTO.hpp"
#include "PendingRosterInviteeDTO.hpp"
#include "PendingRosterMemberDTO.hpp"
namespace lol {
  struct PendingRosterDTO { 
    uint64_t captainId;
    int64_t tournamentId;
    std::string name;
    std::vector<TicketOfferDTO> ticketOffers;
    std::string invitationId;
    std::vector<PendingRosterMemberDTO> members;
    std::string shortName;
    int32_t logoColor;
    int32_t logo;
    std::vector<PendingRosterInviteeDTO> invitees;
    std::vector<FailedInvite> inviteFaileds;
    std::vector<RewardLogo> rewardLogos;
    int32_t tier; 
  };
  inline void to_json(json& j, const PendingRosterDTO& v) {
    j["captainId"] = v.captainId; 
    j["tournamentId"] = v.tournamentId; 
    j["name"] = v.name; 
    j["ticketOffers"] = v.ticketOffers; 
    j["invitationId"] = v.invitationId; 
    j["members"] = v.members; 
    j["shortName"] = v.shortName; 
    j["logoColor"] = v.logoColor; 
    j["logo"] = v.logo; 
    j["invitees"] = v.invitees; 
    j["inviteFaileds"] = v.inviteFaileds; 
    j["rewardLogos"] = v.rewardLogos; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, PendingRosterDTO& v) {
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>(); 
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>(); 
    v.rewardLogos = j.at("rewardLogos").get<std::vector<RewardLogo>>(); 
    v.tier = j.at("tier").get<int32_t>(); 
  }
}