#pragma once
#include "../base_def.hpp" 
#include "PendingRosterInviteeDTO.hpp"
#include "PendingRosterMemberDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "FailedInvite.hpp"
#include "RewardLogo.hpp"
namespace lol {
  struct PendingRosterDTO { 
    int32_t logoColor;
    std::string name;
    std::string invitationId;
    std::vector<PendingRosterInviteeDTO> invitees;
    int32_t logo;
    std::string shortName;
    std::vector<PendingRosterMemberDTO> members;
    uint64_t captainId;
    int64_t tournamentId;
    std::vector<RewardLogo> rewardLogos;
    std::vector<FailedInvite> inviteFaileds;
    std::vector<TicketOfferDTO> ticketOffers;
    int32_t tier; 
  };
  inline void to_json(json& j, const PendingRosterDTO& v) {
    j["logoColor"] = v.logoColor; 
    j["name"] = v.name; 
    j["invitationId"] = v.invitationId; 
    j["invitees"] = v.invitees; 
    j["logo"] = v.logo; 
    j["shortName"] = v.shortName; 
    j["members"] = v.members; 
    j["captainId"] = v.captainId; 
    j["tournamentId"] = v.tournamentId; 
    j["rewardLogos"] = v.rewardLogos; 
    j["inviteFaileds"] = v.inviteFaileds; 
    j["ticketOffers"] = v.ticketOffers; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, PendingRosterDTO& v) {
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rewardLogos = j.at("rewardLogos").get<std::vector<RewardLogo>>(); 
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.tier = j.at("tier").get<int32_t>(); 
  }
}