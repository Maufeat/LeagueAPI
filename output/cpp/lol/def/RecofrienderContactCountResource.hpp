#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderContactCountResource { 
    uint64_t count; 
  };
  void to_json(json& j, const RecofrienderContactCountResource& v) {
  j["count"] = v.count; 
  }
  void from_json(const json& j, RecofrienderContactCountResource& v) {
  v.count = j.at("count").get<uint64_t>(); 
  }
}