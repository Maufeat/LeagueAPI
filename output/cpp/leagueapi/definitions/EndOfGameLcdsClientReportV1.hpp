#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameLcdsClientReportV1 { /**/ 
    uint64_t offenderSummonerId;/**/
    uint64_t gameId;/**/
    std::string comments;/**/
    std::string offenses;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsClientReportV1& v) { 
    j["offenderSummonerId"] = v.offenderSummonerId;
    j["gameId"] = v.gameId;
    j["comments"] = v.comments;
    j["offenses"] = v.offenses;
  }
  static void from_json(const json& j, EndOfGameLcdsClientReportV1& v) { 
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.comments = j.at("comments").get<std::string>(); 
    v.offenses = j.at("offenses").get<std::string>(); 
  }
} 