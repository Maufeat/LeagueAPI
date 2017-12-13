#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LoginDataPacket { 
    uint64_t timeUntilFirstWinOfDay; 
  };
  void to_json(json& j, const LoginDataPacket& v) {
    j["timeUntilFirstWinOfDay"] = v.timeUntilFirstWinOfDay; 
  }
  void from_json(const json& j, LoginDataPacket& v) {
    v.timeUntilFirstWinOfDay = j.at("timeUntilFirstWinOfDay").get<uint64_t>(); 
  }
}