#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolMatchmakingMatchmakingReadyCheckResponse {  
    Accepted_e = 49,
    Declined_e = 50,
    None_e = 48,
  };
  void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResponse& v) {
  if(v == LolMatchmakingMatchmakingReadyCheckResponse::Accepted_e) {
    j = "Accepted";
    return;
  }
  if(v == LolMatchmakingMatchmakingReadyCheckResponse::Declined_e) {
    j = "Declined";
    return;
  }
  if(v == LolMatchmakingMatchmakingReadyCheckResponse::None_e) {
    j = "None";
    return;
  }
  }
  void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResponse& v) {
  if(j.get<std::string>() == "Accepted") {
    v = LolMatchmakingMatchmakingReadyCheckResponse::Accepted_e;
    return;
  } 
  if(j.get<std::string>() == "Declined") {
    v = LolMatchmakingMatchmakingReadyCheckResponse::Declined_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolMatchmakingMatchmakingReadyCheckResponse::None_e;
    return;
  } 
  }
}