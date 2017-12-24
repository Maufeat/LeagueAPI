#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsClientReportV1 { 
    uint64_t offenderSummonerId;
    std::string offenses;
    uint64_t gameId;
    std::string comments; 
  };
  inline void to_json(json& j, const EndOfGameLcdsClientReportV1& v) {
    j["offenderSummonerId"] = v.offenderSummonerId; 
    j["offenses"] = v.offenses; 
    j["gameId"] = v.gameId; 
    j["comments"] = v.comments; 
  }
  inline void from_json(const json& j, EndOfGameLcdsClientReportV1& v) {
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>(); 
    v.offenses = j.at("offenses").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.comments = j.at("comments").get<std::string>(); 
  }
}