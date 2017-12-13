#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EndOfGameLcdsClientReportV1 { 
    std::string offenses;
    uint64_t offenderSummonerId;
    uint64_t gameId;
    std::string comments; 
  };
  void to_json(json& j, const EndOfGameLcdsClientReportV1& v) {
  j["offenses"] = v.offenses; 
  j["offenderSummonerId"] = v.offenderSummonerId; 
  j["gameId"] = v.gameId; 
  j["comments"] = v.comments; 
  }
  void from_json(const json& j, EndOfGameLcdsClientReportV1& v) {
  v.offenses = j.at("offenses").get<std::string>(); 
  v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.comments = j.at("comments").get<std::string>(); 
  }
}