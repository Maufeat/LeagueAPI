#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SimpleDialogMessageResponse { 
    std::string msgId;
    std::string command;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const SimpleDialogMessageResponse& v) {
    j["msgId"] = v.msgId; 
    j["command"] = v.command; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, SimpleDialogMessageResponse& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.command = j.at("command").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}