#pragma once
#include "../base_def.hpp" 
#include "PendingRosterInviteeDTO.hpp"
#include "RewardLogo.hpp"
#include "TicketOfferDTO.hpp"
#include "FailedInvite.hpp"
#include "PendingRosterMemberDTO.hpp"
namespace lol {
  struct PendingRosterDTO { 
    int32_t version;
    int64_t tournamentId;
    std::string invitationId;
    std::string name;
    std::string shortName;
    int32_t logo;
    int32_t logoColor;
    std::vector<RewardLogo> rewardLogos;
    int32_t tier;
    uint64_t captainId;
    std::vector<PendingRosterMemberDTO> members;
    std::vector<PendingRosterInviteeDTO> invitees;
    std::vector<TicketOfferDTO> ticketOffers;
    std::vector<FailedInvite> inviteFaileds; 
  };
  inline void to_json(json& j, const PendingRosterDTO& v) {
    j["version"] = v.version; 
    j["tournamentId"] = v.tournamentId; 
    j["invitationId"] = v.invitationId; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["logo"] = v.logo; 
    j["logoColor"] = v.logoColor; 
    j["rewardLogos"] = v.rewardLogos; 
    j["tier"] = v.tier; 
    j["captainId"] = v.captainId; 
    j["members"] = v.members; 
    j["invitees"] = v.invitees; 
    j["ticketOffers"] = v.ticketOffers; 
    j["inviteFaileds"] = v.inviteFaileds; 
  }
  inline void from_json(const json& j, PendingRosterDTO& v) {
    v.version = j.at("version").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.rewardLogos = j.at("rewardLogos").get<std::vector<RewardLogo>>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>(); 
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>(); 
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>(); 
  }
}