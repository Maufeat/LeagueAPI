#pragma once
#include "../base_def.hpp" 
#include "LcdsInvitee.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsMember.hpp"
namespace lol {
  struct LcdsLobbyStatus { 
    std::string invitationId;
    LcdsPlayer owner;
    std::string chatKey;
    std::vector<LcdsMember> members;
    std::vector<LcdsInvitee> invitees;
    std::string gameMetaData; 
  };
  inline void to_json(json& j, const LcdsLobbyStatus& v) {
    j["invitationId"] = v.invitationId; 
    j["owner"] = v.owner; 
    j["chatKey"] = v.chatKey; 
    j["members"] = v.members; 
    j["invitees"] = v.invitees; 
    j["gameMetaData"] = v.gameMetaData; 
  }
  inline void from_json(const json& j, LcdsLobbyStatus& v) {
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.chatKey = j.at("chatKey").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LcdsMember>>(); 
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
  }
}