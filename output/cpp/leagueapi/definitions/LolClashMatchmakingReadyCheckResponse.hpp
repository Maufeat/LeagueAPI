#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingReadyCheckResponse { /**/ 
    Accepted_e = 49, /**/ 
    Declined_e = 50, /**/ 
    None_e = 48, /**/ 
  };
  static void to_json(json& j, const LolClashMatchmakingReadyCheckResponse& v) {
    switch(v) { 
    case LolClashMatchmakingReadyCheckResponse::Accepted_e:
      j = "Accepted";
    break;
    case LolClashMatchmakingReadyCheckResponse::Declined_e:
      j = "Declined";
    break;
    case LolClashMatchmakingReadyCheckResponse::None_e:
      j = "None";
    break;
    };
  }
  static void from_json(const json& j, LolClashMatchmakingReadyCheckResponse& v) {
    auto s = j.get<std::string>(); 
    if(s == "Accepted") {
      v = LolClashMatchmakingReadyCheckResponse::Accepted_e;
      return;
    } 
    if(s == "Declined") {
      v = LolClashMatchmakingReadyCheckResponse::Declined_e;
      return;
    } 
    if(s == "None") {
      v = LolClashMatchmakingReadyCheckResponse::None_e;
      return;
    } 
  }
} 