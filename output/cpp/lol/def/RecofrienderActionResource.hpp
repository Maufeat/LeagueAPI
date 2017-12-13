#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderActionResource { 
    std::string action;
    std::string platformId;
    uint64_t accountId; 
  };
  void to_json(json& j, const RecofrienderActionResource& v) {
  j["action"] = v.action; 
  j["platformId"] = v.platformId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, RecofrienderActionResource& v) {
  v.action = j.at("action").get<std::string>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}