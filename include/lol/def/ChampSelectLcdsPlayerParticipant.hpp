#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPlayerParticipant { 
    std::string summonerName;
    std::string summonerInternalName;
    uint64_t summonerId;
    int32_t pickMode;
    int32_t pickTurn; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPlayerParticipant& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["summonerId"] = v.summonerId; 
    j["pickMode"] = v.pickMode; 
    j["pickTurn"] = v.pickTurn; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPlayerParticipant& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pickMode = j.at("pickMode").get<int32_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
  }
}