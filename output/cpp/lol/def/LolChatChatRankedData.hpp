#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatChatRankedEntry.hpp>
namespace lol {
  struct LolChatChatRankedData { 
    std::vector<LolChatChatRankedEntry> rankedData;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolChatChatRankedData& v) {
    j["rankedData"] = v.rankedData; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolChatChatRankedData& v) {
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}