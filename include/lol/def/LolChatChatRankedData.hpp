#pragma once
#include "../base_def.hpp" 
#include "LolChatChatRankedEntry.hpp"
namespace lol {
  struct LolChatChatRankedData { 
    uint64_t summonerId;
    std::vector<LolChatChatRankedEntry> rankedData; 
  };
  inline void to_json(json& j, const LolChatChatRankedData& v) {
    j["summonerId"] = v.summonerId; 
    j["rankedData"] = v.rankedData; 
  }
  inline void from_json(const json& j, LolChatChatRankedData& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry>>(); 
  }
}