#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderContactStateResource { 
    std::string displayState;
    std::string action;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const RecofrienderContactStateResource& v) {
    j["displayState"] = v.displayState; 
    j["action"] = v.action; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, RecofrienderContactStateResource& v) {
    v.displayState = j.at("displayState").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}