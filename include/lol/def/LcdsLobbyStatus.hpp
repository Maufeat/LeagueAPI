#pragma once
#include "../base_def.hpp" 
#include "LcdsInvitee.hpp"
#include "LcdsMember.hpp"
#include "LcdsPlayer.hpp"
namespace lol {
  struct LcdsLobbyStatus { 
    std::vector<LcdsMember> members;
    std::string invitationId;
    std::string gameMetaData;
    std::vector<LcdsInvitee> invitees;
    LcdsPlayer owner;
    std::string chatKey; 
  };
  inline void to_json(json& j, const LcdsLobbyStatus& v) {
    j["members"] = v.members; 
    j["invitationId"] = v.invitationId; 
    j["gameMetaData"] = v.gameMetaData; 
    j["invitees"] = v.invitees; 
    j["owner"] = v.owner; 
    j["chatKey"] = v.chatKey; 
  }
  inline void from_json(const json& j, LcdsLobbyStatus& v) {
    v.members = j.at("members").get<std::vector<LcdsMember>>(); 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.chatKey = j.at("chatKey").get<std::string>(); 
  }
}