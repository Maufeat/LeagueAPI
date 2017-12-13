#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SimpleDialogMessageResponse { 
    std::string command;
    std::string msgId;
    uint64_t accountId; 
  };
  void to_json(json& j, const SimpleDialogMessageResponse& v) {
  j["command"] = v.command; 
  j["msgId"] = v.msgId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, SimpleDialogMessageResponse& v) {
  v.command = j.at("command").get<std::string>(); 
  v.msgId = j.at("msgId").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}