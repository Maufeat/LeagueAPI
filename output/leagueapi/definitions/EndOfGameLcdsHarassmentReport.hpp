#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameLcdsHarassmentReport { /**/ 
    std::string reportSource;/**/
    std::string comment;/**/
    uint64_t reportedSummonerId;/**/
    uint64_t gameId;/**/
    std::string offense;/**/
    uint64_t reportingSummonerId;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsHarassmentReport& v) { 
    j["reportSource"] = v.reportSource;
    j["comment"] = v.comment;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["gameId"] = v.gameId;
    j["offense"] = v.offense;
    j["reportingSummonerId"] = v.reportingSummonerId;
  }
  static void from_json(const json& j, EndOfGameLcdsHarassmentReport& v) { 
    v.reportSource = j.at("reportSource").get<std::string>(); 
    v.comment = j.at("comment").get<std::string>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.offense = j.at("offense").get<std::string>(); 
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>(); 
  }
} 