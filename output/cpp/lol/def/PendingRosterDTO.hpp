#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PendingRosterMemberDTO.hpp>
#include <lol/def/FailedInvite.hpp>
#include <lol/def/PendingRosterInviteeDTO.hpp>
#include <lol/def/TicketOfferDTO.hpp>
#include <lol/def/RewardLogo.hpp>
namespace lol {
  struct PendingRosterDTO { 
    int32_t logo;
    std::string shortName;
    std::vector<RewardLogo> rewardLogos;
    std::string name;
    int32_t tier;
    std::vector<TicketOfferDTO> ticketOffers;
    std::vector<FailedInvite> inviteFaileds;
    std::string invitationId;
    std::vector<PendingRosterInviteeDTO> invitees;
    int64_t tournamentId;
    int32_t logoColor;
    uint64_t captainId;
    std::vector<PendingRosterMemberDTO> members; 
  };
  void to_json(json& j, const PendingRosterDTO& v) {
  j["logo"] = v.logo; 
  j["shortName"] = v.shortName; 
  j["rewardLogos"] = v.rewardLogos; 
  j["name"] = v.name; 
  j["tier"] = v.tier; 
  j["ticketOffers"] = v.ticketOffers; 
  j["inviteFaileds"] = v.inviteFaileds; 
  j["invitationId"] = v.invitationId; 
  j["invitees"] = v.invitees; 
  j["tournamentId"] = v.tournamentId; 
  j["logoColor"] = v.logoColor; 
  j["captainId"] = v.captainId; 
  j["members"] = v.members; 
  }
  void from_json(const json& j, PendingRosterDTO& v) {
  v.logo = j.at("logo").get<int32_t>(); 
  v.shortName = j.at("shortName").get<std::string>(); 
  v.rewardLogos = j.at("rewardLogos").get<std::vector<RewardLogo>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.tier = j.at("tier").get<int32_t>(); 
  v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>(); 
  v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>(); 
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  v.logoColor = j.at("logoColor").get<int32_t>(); 
  v.captainId = j.at("captainId").get<uint64_t>(); 
  v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>(); 
  }
}