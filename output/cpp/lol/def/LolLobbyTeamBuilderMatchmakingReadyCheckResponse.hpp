#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyTeamBuilderMatchmakingReadyCheckResponse {  
    Accepted_e = 49,
    Declined_e = 50,
    None_e = 48,
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResponse& v) {
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Accepted_e) {
    j = "Accepted";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Declined_e) {
    j = "Declined";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingReadyCheckResponse::None_e) {
    j = "None";
    return;
  }
  }
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResponse& v) {
  if(j.get<std::string>() == "Accepted") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Accepted_e;
    return;
  } 
  if(j.get<std::string>() == "Declined") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Declined_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::None_e;
    return;
  } 
  }
}