﻿#pragma once

#include "Emitter.hpp"

namespace acid
{
class ACID_EXPORT EmitterPoint :
	public Emitter
{
public:
	explicit EmitterPoint(const Transform &localTransform = Transform::Identity);

	void Start() override;

	void Update() override;

	void Decode(const Metadata &metadata) override;

	void Encode(Metadata &metadata) const override;

	Vector3f GeneratePosition() const override;

	const Vector3f &GetPoint() const { return m_point; }

	void SetPoint(const Vector3f &point) { m_point = point; }

private:
	Vector3f m_point;
};
}
