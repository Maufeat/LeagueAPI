#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsPlayer { 
    std::string summonerName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LcdsPlayer& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LcdsPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}