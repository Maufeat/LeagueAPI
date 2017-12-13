#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SimpleMessage { 
    std::string msgId;
    std::string type;
    std::vector<std::string> params;
    uint64_t accountId; 
  };
  void to_json(json& j, const SimpleMessage& v) {
  j["msgId"] = v.msgId; 
  j["type"] = v.type; 
  j["params"] = v.params; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, SimpleMessage& v) {
  v.msgId = j.at("msgId").get<std::string>(); 
  v.type = j.at("type").get<std::string>(); 
  v.params = j.at("params").get<std::vector<std::string>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}