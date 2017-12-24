#pragma once
#include "../base_def.hpp" 
#include "LcdsInvitee.hpp"
#include "LcdsMember.hpp"
#include "LcdsPlayer.hpp"
namespace lol {
  struct LcdsLobbyStatus { 
    std::string chatKey;
    std::vector<LcdsInvitee> invitees;
    std::string gameMetaData;
    std::string invitationId;
    std::vector<LcdsMember> members;
    LcdsPlayer owner; 
  };
  inline void to_json(json& j, const LcdsLobbyStatus& v) {
    j["chatKey"] = v.chatKey; 
    j["invitees"] = v.invitees; 
    j["gameMetaData"] = v.gameMetaData; 
    j["invitationId"] = v.invitationId; 
    j["members"] = v.members; 
    j["owner"] = v.owner; 
  }
  inline void from_json(const json& j, LcdsLobbyStatus& v) {
    v.chatKey = j.at("chatKey").get<std::string>(); 
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LcdsMember>>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
  }
}