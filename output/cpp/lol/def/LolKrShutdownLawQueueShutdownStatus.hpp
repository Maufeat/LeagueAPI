#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolKrShutdownLawQueueShutdownStatus { 
    bool isDisabled; 
  };
  void to_json(json& j, const LolKrShutdownLawQueueShutdownStatus& v) {
    j["isDisabled"] = v.isDisabled; 
  }
  void from_json(const json& j, LolKrShutdownLawQueueShutdownStatus& v) {
    v.isDisabled = j.at("isDisabled").get<bool>(); 
  }
}