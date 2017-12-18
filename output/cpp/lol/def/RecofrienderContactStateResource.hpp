#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderContactStateResource { 
    std::string action;
    std::string displayState;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const RecofrienderContactStateResource& v) {
    j["action"] = v.action; 
    j["displayState"] = v.displayState; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, RecofrienderContactStateResource& v) {
    v.action = j.at("action").get<std::string>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}