#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LcdsInvitee.hpp>
#include <leagueapi/definitions/LcdsMember.hpp>
#include <leagueapi/definitions/LcdsPlayer.hpp>

namespace leagueapi {
  struct LcdsLobbyStatus { /**/ 
    std::string invitationId;/**/
    std::string chatKey;/**/
    std::vector<LcdsInvitee> invitees;/**/
    LcdsPlayer owner;/**/
    std::string gameMetaData;/**/
    std::vector<LcdsMember> members;/**/
  };
  static void to_json(json& j, const LcdsLobbyStatus& v) { 
    j["invitationId"] = v.invitationId;
    j["chatKey"] = v.chatKey;
    j["invitees"] = v.invitees;
    j["owner"] = v.owner;
    j["gameMetaData"] = v.gameMetaData;
    j["members"] = v.members;
  }
  static void from_json(const json& j, LcdsLobbyStatus& v) { 
    v.invitationId = j.at("invitationId").get<std::string>(); 
    v.chatKey = j.at("chatKey").get<std::string>(); 
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>(); 
    v.owner = j.at("owner").get<LcdsPlayer>(); 
    v.gameMetaData = j.at("gameMetaData").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LcdsMember>>(); 
  }
} 