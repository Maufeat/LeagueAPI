#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct StoreLcdsStoreAccountBalanceNotification { 
    int64_t ip;
    int64_t rp; 
  };
  void to_json(json& j, const StoreLcdsStoreAccountBalanceNotification& v) {
  j["ip"] = v.ip; 
  j["rp"] = v.rp; 
  }
  void from_json(const json& j, StoreLcdsStoreAccountBalanceNotification& v) {
  v.ip = j.at("ip").get<int64_t>(); 
  v.rp = j.at("rp").get<int64_t>(); 
  }
}