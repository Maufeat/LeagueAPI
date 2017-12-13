#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EndOfGameStats { 
    uint64_t timeUntilNextFirstWinBonus; 
  };
  void to_json(json& j, const EndOfGameStats& v) {
  j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus; 
  }
  void from_json(const json& j, EndOfGameStats& v) {
  v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<uint64_t>(); 
  }
}