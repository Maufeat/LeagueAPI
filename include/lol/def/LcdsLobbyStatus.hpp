#pragma once
#include "../base_def.hpp" 
#include "LcdsMember.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsInvitee.hpp"
namespace lol {
  struct LcdsLobbyStatus { 
    std::string gameMetaData;
    std::string invitationId;
    std::vector<LcdsInvitee> invitees;
    std::vector<LcdsMember> members;
    LcdsPlayer owner;
    std::string chatKey; 
  };
  inline void to_json(json& j, const LcdsLobbyStatus& v) {
    j["gameMetaData"] = v.gameMetaData; 
    j["invitationId"] = v.invitationId; 
    j["invitees"] = v.invitees; 
    j["members"] = v.members; 
    j["owner"] = v.owner; 
    j["chatKey"] = v.chatKey; 
  }
  inline void from_json(const json& j, LcdsLobbyStatus& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>(); 
    v.members = j.at("members").get<std::vector<LcdsMember>>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.chatKey = j.at("chatKey").get<std::string>(); 
  }
}