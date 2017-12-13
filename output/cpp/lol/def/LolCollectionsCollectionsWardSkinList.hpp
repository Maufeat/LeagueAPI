#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsCollectionsWardSkinList { 
    std::vector<int64_t> wardSkinList; 
  };
  void to_json(json& j, const LolCollectionsCollectionsWardSkinList& v) {
  j["wardSkinList"] = v.wardSkinList; 
  }
  void from_json(const json& j, LolCollectionsCollectionsWardSkinList& v) {
  v.wardSkinList = j.at("wardSkinList").get<std::vector<int64_t>>(); 
  }
}