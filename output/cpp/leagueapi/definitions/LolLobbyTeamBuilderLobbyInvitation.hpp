#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyInvitation { /**/ 
    json invitationMetaData;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderLobbyInvitation& v) { 
    j["invitationMetaData"] = v.invitationMetaData;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLobbyInvitation& v) { 
    v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
  }
} 