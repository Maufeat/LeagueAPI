#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsClientReportV1 { 
    uint64_t offenderSummonerId;
    uint64_t gameId;
    std::string offenses;
    std::string comments; 
  };
  inline void to_json(json& j, const EndOfGameLcdsClientReportV1& v) {
    j["offenderSummonerId"] = v.offenderSummonerId; 
    j["gameId"] = v.gameId; 
    j["offenses"] = v.offenses; 
    j["comments"] = v.comments; 
  }
  inline void from_json(const json& j, EndOfGameLcdsClientReportV1& v) {
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.offenses = j.at("offenses").get<std::string>(); 
    v.comments = j.at("comments").get<std::string>(); 
  }
}