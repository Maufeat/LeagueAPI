#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingReadyCheckResponse { /**/ 
    Accepted_e = 49, /**/ 
    Declined_e = 50, /**/ 
    None_e = 48, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingReadyCheckResponse& v) {
    switch(v) { 
    case LolMatchmakingMatchmakingReadyCheckResponse::Accepted_e:
      j = "Accepted";
    break;
    case LolMatchmakingMatchmakingReadyCheckResponse::Declined_e:
      j = "Declined";
    break;
    case LolMatchmakingMatchmakingReadyCheckResponse::None_e:
      j = "None";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingReadyCheckResponse& v) {
    auto s = j.get<std::string>(); 
    if(s == "Accepted") {
      v = LolMatchmakingMatchmakingReadyCheckResponse::Accepted_e;
      return;
    } 
    if(s == "Declined") {
      v = LolMatchmakingMatchmakingReadyCheckResponse::Declined_e;
      return;
    } 
    if(s == "None") {
      v = LolMatchmakingMatchmakingReadyCheckResponse::None_e;
      return;
    } 
  }
} 