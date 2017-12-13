#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsPlayer.hpp>
#include <lol/def/LcdsMember.hpp>
#include <lol/def/LcdsInvitee.hpp>
namespace lol {
  struct LcdsLobbyStatus { 
    std::string invitationId;
    std::string chatKey;
    std::vector<LcdsInvitee> invitees;
    LcdsPlayer owner;
    std::string gameMetaData;
    std::vector<LcdsMember> members; 
  };
  void to_json(json& j, const LcdsLobbyStatus& v) {
  j["invitationId"] = v.invitationId; 
  j["chatKey"] = v.chatKey; 
  j["invitees"] = v.invitees; 
  j["owner"] = v.owner; 
  j["gameMetaData"] = v.gameMetaData; 
  j["members"] = v.members; 
  }
  void from_json(const json& j, LcdsLobbyStatus& v) {
  v.invitationId = j.at("invitationId").get<std::string>(); 
  v.chatKey = j.at("chatKey").get<std::string>(); 
  v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>(); 
  v.owner = j.at("owner").get<LcdsPlayer>(); 
  v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
  v.members = j.at("members").get<std::vector<LcdsMember>>(); 
  }
}