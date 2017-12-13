#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSummonerAutoFillQueueDto.hpp>
namespace lol {
  struct LolSummonerAutoFillDto { 
    std::vector<LolSummonerAutoFillQueueDto> autoFillQueues; 
  };
  void to_json(json& j, const LolSummonerAutoFillDto& v) {
    j["autoFillQueues"] = v.autoFillQueues; 
  }
  void from_json(const json& j, LolSummonerAutoFillDto& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolSummonerAutoFillQueueDto>>(); 
  }
}