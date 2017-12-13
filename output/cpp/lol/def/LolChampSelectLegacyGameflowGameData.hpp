#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyQueue.hpp>
namespace lol {
  struct LolChampSelectLegacyGameflowGameData { 
    LolChampSelectLegacyQueue queue; 
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowGameData& v) {
    j["queue"] = v.queue; 
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowGameData& v) {
    v.queue = j.at("queue").get<LolChampSelectLegacyQueue>(); 
  }
}