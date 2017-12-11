#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChatChatRankedEntry.hpp>"

namespace leagueapi {
  struct LolChatChatRankedData { /**/ 
    std::vector<LolChatChatRankedEntry> rankedData;/**/
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LolChatChatRankedData& v) { 
    j["rankedData"] = v.rankedData;
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolChatChatRankedData& v) { 
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 