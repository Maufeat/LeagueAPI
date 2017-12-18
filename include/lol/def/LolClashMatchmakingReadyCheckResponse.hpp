#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolClashMatchmakingReadyCheckResponse {  
    Accepted_e = 49,
    Declined_e = 50,
    None_e = 48,
  };
  inline void to_json(json& j, const LolClashMatchmakingReadyCheckResponse& v) {
    if(v == LolClashMatchmakingReadyCheckResponse::Accepted_e) {
      j = "Accepted";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckResponse::Declined_e) {
      j = "Declined";
      return;
    }
    if(v == LolClashMatchmakingReadyCheckResponse::None_e) {
      j = "None";
      return;
    }
  }
  inline void from_json(const json& j, LolClashMatchmakingReadyCheckResponse& v) {
    if(j.get<std::string>() == "Accepted") {
      v = LolClashMatchmakingReadyCheckResponse::Accepted_e;
      return;
    } 
    if(j.get<std::string>() == "Declined") {
      v = LolClashMatchmakingReadyCheckResponse::Declined_e;
      return;
    } 
    if(j.get<std::string>() == "None") {
      v = LolClashMatchmakingReadyCheckResponse::None_e;
      return;
    } 
  }
}