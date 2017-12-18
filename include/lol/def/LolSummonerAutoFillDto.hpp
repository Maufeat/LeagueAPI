#pragma once
#include "../base_def.hpp" 
#include "LolSummonerAutoFillQueueDto.hpp"
namespace lol {
  struct LolSummonerAutoFillDto { 
    std::vector<LolSummonerAutoFillQueueDto> autoFillQueues; 
  };
  inline void to_json(json& j, const LolSummonerAutoFillDto& v) {
    j["autoFillQueues"] = v.autoFillQueues; 
  }
  inline void from_json(const json& j, LolSummonerAutoFillDto& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolSummonerAutoFillQueueDto>>(); 
  }
}