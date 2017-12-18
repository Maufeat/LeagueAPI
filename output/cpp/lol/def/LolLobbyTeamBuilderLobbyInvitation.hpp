#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderLobbyInvitation { 
    json invitationMetaData; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyInvitation& v) {
    j["invitationMetaData"] = v.invitationMetaData; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyInvitation& v) {
    v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
  }
}