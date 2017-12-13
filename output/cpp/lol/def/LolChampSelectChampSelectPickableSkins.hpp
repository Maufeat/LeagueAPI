#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectChampSelectPickableSkins { 
    std::vector<int32_t> skinIds; 
  };
  void to_json(json& j, const LolChampSelectChampSelectPickableSkins& v) {
    j["skinIds"] = v.skinIds; 
  }
  void from_json(const json& j, LolChampSelectChampSelectPickableSkins& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>(); 
  }
}