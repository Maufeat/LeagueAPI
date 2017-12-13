#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLeaguesLeagueQueueType {  
    FLEXSR_e = 3,
    FLEXTT_e = 2,
    NONE_e = 0,
    SOLO5V5_e = 1,
  };
  void to_json(json& j, const LolLeaguesLeagueQueueType& v) {
    if(v == LolLeaguesLeagueQueueType::FLEXSR_e) {
      j = "FLEXSR";
      return;
    }
    if(v == LolLeaguesLeagueQueueType::FLEXTT_e) {
      j = "FLEXTT";
      return;
    }
    if(v == LolLeaguesLeagueQueueType::NONE_e) {
      j = "NONE";
      return;
    }
    if(v == LolLeaguesLeagueQueueType::SOLO5V5_e) {
      j = "SOLO5V5";
      return;
    }
  }
  void from_json(const json& j, LolLeaguesLeagueQueueType& v) {
    if(j.get<std::string>() == "FLEXSR") {
      v = LolLeaguesLeagueQueueType::FLEXSR_e;
      return;
    } 
    if(j.get<std::string>() == "FLEXTT") {
      v = LolLeaguesLeagueQueueType::FLEXTT_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = LolLeaguesLeagueQueueType::NONE_e;
      return;
    } 
    if(j.get<std::string>() == "SOLO5V5") {
      v = LolLeaguesLeagueQueueType::SOLO5V5_e;
      return;
    } 
  }
}