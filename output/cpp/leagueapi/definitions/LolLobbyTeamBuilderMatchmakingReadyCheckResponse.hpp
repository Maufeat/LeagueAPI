#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingReadyCheckResponse { /**/ 
    Accepted_e = 49, /**/ 
    Declined_e = 50, /**/ 
    None_e = 48, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResponse& v) {
    switch(v) { 
    case LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Accepted_e:
      j = "Accepted";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Declined_e:
      j = "Declined";
    break;
    case LolLobbyTeamBuilderMatchmakingReadyCheckResponse::None_e:
      j = "None";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResponse& v) {
    auto s = j.get<std::string>(); 
    if(s == "Accepted") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Accepted_e;
      return;
    } 
    if(s == "Declined") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Declined_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::None_e;
      return;
    } 
  }
} 