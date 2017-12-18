#pragma once
#include <json.hpp>
#include <optional>
namespace nlohmann {
  template <typename T>
  struct adl_serializer<std::optional<T>> {
    static void to_json(json& j, const std::optional<T>& opt) {
      if(opt)
        j = *opt;
      else
        j = nullptr;
    }
    static void from_json(const json& j, std::optional<T>& opt) {
      if(j.is_null())
        opt.reset();
      else
        opt = j.get<T>();
    }
  };
}
namespace lol {
  using json = nlohmann::json;
} 