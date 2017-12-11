#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueQueueType { /**/ 
    FLEXSR_e = 3, /**/ 
    FLEXTT_e = 2, /**/ 
    NONE_e = 0, /**/ 
    SOLO5V5_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLeaguesLeagueQueueType& v) {
    switch(v) { 
    case LolLeaguesLeagueQueueType::FLEXSR_e:
      j = "FLEXSR";
    break;
    case LolLeaguesLeagueQueueType::FLEXTT_e:
      j = "FLEXTT";
    break;
    case LolLeaguesLeagueQueueType::NONE_e:
      j = "NONE";
    break;
    case LolLeaguesLeagueQueueType::SOLO5V5_e:
      j = "SOLO5V5";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesLeagueQueueType& v) {
    auto s = j.get<std::string>(); 
    if(s == "FLEXSR") {
      v = LolLeaguesLeagueQueueType::FLEXSR_e;
      return;
    } 
    if(s == "FLEXTT") {
      v = LolLeaguesLeagueQueueType::FLEXTT_e;
      return;
    } 
    if(s == "NONE") {
      v = LolLeaguesLeagueQueueType::NONE_e;
      return;
    } 
    if(s == "SOLO5V5") {
      v = LolLeaguesLeagueQueueType::SOLO5V5_e;
      return;
    } 
  }
} 